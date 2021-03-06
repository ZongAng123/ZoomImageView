//
//  ZoomImageView.h
//  缩放图像视图
//
//  Created by 纵昂 on 2017/2/23.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger,KGestureRecognizerType){
    
    KSigleTapGestureRecognizerType,   //点击触发
    KDoubleTapGestureRecognizerType,  //双击触发
    KLongPressGestureRecognizerType   //长按触发
};

@interface ZoomImageView : UIView
//实例化一个调用类
+(instancetype)getZoomImageView;

//初始化要展示的图片
-(void)showZoomImageView:(UIImageView *)imageView addGRType:(KGestureRecognizerType)grType;


@end
