//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPSendExpo : NSObject
{
    NSMutableArray *_successArray;
    NSMutableArray *_retryArray;
    NSMutableArray *_requestingArray;
    NSMutableDictionary *_retryExpoNamespaceDict;
    NSMutableDictionary *_retryExpoPidDict;
    NSMutableDictionary *_retryExpoCacheFlagDict;
    NSMutableDictionary *_retryArgsDict;
    NSObject<OS_dispatch_queue> *_sendQueue;
}

+ (id)shared;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sendQueue; // @synthesize sendQueue=_sendQueue;
@property(retain, nonatomic) NSMutableDictionary *retryArgsDict; // @synthesize retryArgsDict=_retryArgsDict;
@property(retain, nonatomic) NSMutableDictionary *retryExpoCacheFlagDict; // @synthesize retryExpoCacheFlagDict=_retryExpoCacheFlagDict;
@property(retain, nonatomic) NSMutableDictionary *retryExpoPidDict; // @synthesize retryExpoPidDict=_retryExpoPidDict;
@property(retain, nonatomic) NSMutableDictionary *retryExpoNamespaceDict; // @synthesize retryExpoNamespaceDict=_retryExpoNamespaceDict;
@property(retain, nonatomic) NSMutableArray *requestingArray; // @synthesize requestingArray=_requestingArray;
@property(retain, nonatomic) NSMutableArray *retryArray; // @synthesize retryArray=_retryArray;
@property(retain, nonatomic) NSMutableArray *successArray; // @synthesize successArray=_successArray;
- (void).cxx_destruct;
- (void)clearRetryArray;
- (void)removeExpoFromRetryArray:(id)arg1;
- (void)addExpoToRetryArray:(id)arg1 namespace:(id)arg2 pid:(id)arg3 isFromCache:(_Bool)arg4 args:(id)arg5;
- (void)retryExpoSend;
- (_Bool)checkValidityOfExpo:(id)arg1;
- (void)sendExpo:(id)arg1 namespace:(id)arg2 pid:(id)arg3 isFromCache:(_Bool)arg4 args:(id)arg5;
- (void)createExpoCommitter:(id)arg1 namespace:(id)arg2 pid:(id)arg3 ignoreDuplication:(_Bool)arg4 args:(id)arg5;
- (id)init;

@end
