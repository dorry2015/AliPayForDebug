//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSABaseRpcResponse.h"

@class MOBILECSABankCardInfo, MOBILECSABlock, MOBILECSAUniversalItemDetailPayInfo, NSArray, NSString;

@interface MOBILECSAUniversalItemDetailResponse : MOBILECSABaseRpcResponse
{
    _Bool _snapshot;
    NSArray *_headers;
    MOBILECSAUniversalItemDetailPayInfo *_payInfo;
    NSString *_shareUrl;
    NSString *_shopUrl;
    NSString *_unshelve;
    NSArray *_blockList;
    NSString *_shopId;
    NSString *_pid;
    NSString *_cityId;
    NSString *_cityName;
    NSString *_provinceName;
    NSString *_industry;
    MOBILECSABlock *_payInfoBlock;
    NSString *_comeFrom;
    long long _serverTs;
    MOBILECSABankCardInfo *_bankCardInfo;
}

+ (Class)blockListElementClass;
+ (Class)headersElementClass;
@property(retain, nonatomic) MOBILECSABankCardInfo *bankCardInfo; // @synthesize bankCardInfo=_bankCardInfo;
@property(nonatomic) long long serverTs; // @synthesize serverTs=_serverTs;
@property(retain, nonatomic) NSString *comeFrom; // @synthesize comeFrom=_comeFrom;
@property(retain, nonatomic) MOBILECSABlock *payInfoBlock; // @synthesize payInfoBlock=_payInfoBlock;
@property(retain, nonatomic) NSString *industry; // @synthesize industry=_industry;
@property(retain, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSArray *blockList; // @synthesize blockList=_blockList;
@property(retain, nonatomic) NSString *unshelve; // @synthesize unshelve=_unshelve;
@property(retain, nonatomic) NSString *shopUrl; // @synthesize shopUrl=_shopUrl;
@property(nonatomic) _Bool snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) MOBILECSAUniversalItemDetailPayInfo *payInfo; // @synthesize payInfo=_payInfo;
@property(retain, nonatomic) NSArray *headers; // @synthesize headers=_headers;
- (void).cxx_destruct;

@end

