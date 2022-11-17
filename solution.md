### 1需求分析：

#### 如何煮咖啡？

1->把热水倒在研磨好的咖啡上，把冲好的咖啡液体收集在某种容器中。

2->热水从哪来？->设置一个HotWater类。

3->把咖啡存放在什么地方？存放在ContainmentVessel这个容器中。

4->提供方法使得人可以和系统进行交互。系统必须能够向主人报告自己的工作状态。

5->基于4需求，向咖啡机模型中增加了一个CoffeeMachine类。

##### HotWater分析：

X型咖啡机需要：加热器、阀门及加热传感器。

HotWater负责-把水加热->并把水喷洒在研磨好的咖啡上，形成溶液->流入ContainmentVessel中。

##### ContainmentVessel分析：

###### ContainmentVessel需要->保温盘及其传感器。

负责->保持存放咖啡的温度->让我们知道容器中是否有咖啡。

##### UML图分析

###### 1->如果使用者按下冲煮按钮

![image-20221117225828363](C:\Users\asuka\Desktop\CoffeeMaker\Coffee_Maker\Image\1.png)

如果通向器皿的热水流的开始和停止是由ContainmentVessel通知HotWater进行的ContainmentVessel给HotWater发送了start消息。说明ContainmentVessel依赖于HotWater。

上述UML图展示了当使用者按下冲煮按钮之后的效果，当HotWater和ContainmentVessel都准备好，CoffeeMachine对象就应该向HotWater发送start消息，HotWater就开始工作。

###### 2->如果接受容器还没有放好

当接收器皿没有准备好，ContainmentVessel通知HotWater停止传送热水，当准备好后，再通知HotWater再次开启热水流，热水流的终止和恢复。

![image-20221117225901270](C:\Users\asuka\Desktop\CoffeeMaker\Coffee_Maker\Image\2.png)

###### 3->冲煮完成

![image-20221117230035350](C:\Users\asuka\Desktop\CoffeeMaker\Coffee_Maker\Image\3.png)

###### 4>咖啡喝完了

![image-20221117230247473](C:\Users\asuka\Desktop\CoffeeMaker\Coffee_Maker\Image\4.png)

抽象为一副具有相同关联关系的类图。

### 2设计抽象模型

![image-20221117231007624](C:\Users\asuka\Desktop\CoffeeMaker\Coffee_Maker\Image\5.png)

###### 使用者按下冲煮按钮

CoffeeMachine如何知道冲煮按钮被按下了呢？

通过->调用CoffeeMakerAPI.GeeBrewButtonStatus()函数。

->这个调用放在CoffeeMachine的派生类中。

->创建一个受保护的StartBrewing()方法

->IsReady()测试以及随后对CoffeeMachine和ContainmentVessel的start()方法的调用都应归属于CoffeeMachine类。

->设计HotWater的Start()抽象方法，HW_Element会实现该方法调用CoffeeMakerAPI中关闭阀门以及开启加热器的函数。

->系统的控制流是如何运转调用CoffeeMakerAPI.GetBrewButtonStatus()函数的呢？最好总是假设消息都是可以异步发送的，就好像存在有独立的线程一样。我们这里采用select方式。

![image-20221117231025181](C:\Users\asuka\Desktop\CoffeeMaker\Coffee_Maker\Image\6.png)

