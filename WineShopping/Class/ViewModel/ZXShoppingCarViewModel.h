//
//  ZXShoppingCarViewModel.h
//  WineShopping
//
//  Created by xinying on 2017/4/16.
//  Copyright © 2017年 habav. All rights reserved.
//

#import "ZXBasedViewModel.h"

@interface ZXShoppingCarViewModel : ZXBasedViewModel

@property(nonatomic,copy)NSString *totalPriice;

///用来判断当前购物车是否为空
@property(nonatomic,strong)RACSubject               *emptySubject;

///判断当前事件是否为点击
@property(nonatomic,assign)BOOL                     isClickAllBtn;

@property(nonatomic,copy)NSString                   *price;

///标志全选按钮的状态
@property(nonatomic,assign)BOOL                     btnState;

///商品点击
@property(nonatomic,strong)RACCommand               *goodClickCommand;

///地址
@property(nonatomic,strong)RACCommand               *addressCommand;

///选好了
@property(nonatomic,strong)RACCommand               *payCommand;

///地址
@property(nonatomic,strong)ZXAddress               *address;

@end
