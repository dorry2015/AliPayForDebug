//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBSHOPDETAILBaseShopRpcRequest.h"

@class NSString;

@interface KBSHOPDETAILCartQueryRequest : KBSHOPDETAILBaseShopRpcRequest
{
    NSString *_cookId;
    NSString *_merchantId;
    NSString *_userSource;
    NSString *_dinningType;
    NSString *_userNum;
    NSString *_dinningTimeType;
    NSString *_multiType;
    NSString *_shopOrderStyle;
    NSString *_payType;
    NSString *_tableNo;
    NSString *_codeId;
    NSString *_bizScene;
    NSString *_dinningOrderId;
}

@property(retain, nonatomic) NSString *dinningOrderId; // @synthesize dinningOrderId=_dinningOrderId;
@property(retain, nonatomic) NSString *bizScene; // @synthesize bizScene=_bizScene;
@property(retain, nonatomic) NSString *codeId; // @synthesize codeId=_codeId;
@property(retain, nonatomic) NSString *tableNo; // @synthesize tableNo=_tableNo;
@property(retain, nonatomic) NSString *payType; // @synthesize payType=_payType;
@property(retain, nonatomic) NSString *shopOrderStyle; // @synthesize shopOrderStyle=_shopOrderStyle;
@property(retain, nonatomic) NSString *multiType; // @synthesize multiType=_multiType;
@property(retain, nonatomic) NSString *dinningTimeType; // @synthesize dinningTimeType=_dinningTimeType;
@property(retain, nonatomic) NSString *userNum; // @synthesize userNum=_userNum;
@property(retain, nonatomic) NSString *dinningType; // @synthesize dinningType=_dinningType;
@property(retain, nonatomic) NSString *userSource; // @synthesize userSource=_userSource;
@property(retain, nonatomic) NSString *merchantId; // @synthesize merchantId=_merchantId;
@property(retain, nonatomic) NSString *cookId; // @synthesize cookId=_cookId;
- (void).cxx_destruct;

@end

