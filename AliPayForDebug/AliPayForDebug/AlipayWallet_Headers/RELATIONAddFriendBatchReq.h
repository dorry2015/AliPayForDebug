//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RELATIONCommonReq.h"

@class NSDictionary, NSString;

@interface RELATIONAddFriendBatchReq : RELATIONCommonReq
{
    NSDictionary *_targetUserMap;
    NSString *_message;
    NSString *_source;
}

+ (Class)targetUserMapElementClass;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDictionary *targetUserMap; // @synthesize targetUserMap=_targetUserMap;
- (void).cxx_destruct;

@end

