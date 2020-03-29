//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TFHistoryRecordRespV3 : NSObject
{
    _Bool _success;
    NSString *_code;
    NSString *_message;
    NSArray *_transferRecordList;
    NSDictionary *_receiverInfos;
    NSArray *_toolList;
    NSArray *_cardList;
    NSArray *_templateInfos;
}

+ (Class)templateInfosElementClass;
+ (Class)cardListElementClass;
+ (Class)toolListElementClass;
+ (Class)receiverInfosElementClass;
+ (Class)transferRecordListElementClass;
@property(retain, nonatomic) NSArray *templateInfos; // @synthesize templateInfos=_templateInfos;
@property(retain, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
@property(retain, nonatomic) NSArray *toolList; // @synthesize toolList=_toolList;
@property(retain, nonatomic) NSDictionary *receiverInfos; // @synthesize receiverInfos=_receiverInfos;
@property(retain, nonatomic) NSArray *transferRecordList; // @synthesize transferRecordList=_transferRecordList;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
