//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBSHOPDETAILBaseRpcResponse.h"

@class KBSHOPDETAILShoppingCart, NSArray;

@interface KBSHOPDETAILItemCartResponse : KBSHOPDETAILBaseRpcResponse
{
    KBSHOPDETAILShoppingCart *_shoppingCart;
    NSArray *_extMessage;
}

+ (Class)extMessageElementClass;
@property(retain, nonatomic) NSArray *extMessage; // @synthesize extMessage=_extMessage;
@property(retain, nonatomic) KBSHOPDETAILShoppingCart *shoppingCart; // @synthesize shoppingCart=_shoppingCart;
- (void).cxx_destruct;

@end

