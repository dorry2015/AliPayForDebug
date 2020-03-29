//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, PSDContext;
@protocol PSDEventTargetProtocol, PSDPluginProtocol;

@interface PSDEvent : NSObject
{
    _Bool _bubbles;
    _Bool _cancelable;
    _Bool _isCancelled;
    _Bool _isStoped;
    _Bool _ignoreDiagnose;
    _Bool _ignoreDiagnoseInputParams;
    _Bool _ignoreDiagnoseOutputParams;
    unsigned long long _eventPhase;
    double _timeStamp;
    NSString *_eventType;
    id <PSDEventTargetProtocol> _target;
    id <PSDEventTargetProtocol> _currentTarget;
    PSDContext *_context;
    NSDictionary *_psdEventData;
    id <PSDPluginProtocol> _currentListner;
    NSString *_traceId;
    NSString *_parentTraceId;
}

@property(readonly, nonatomic) _Bool ignoreDiagnoseOutputParams; // @synthesize ignoreDiagnoseOutputParams=_ignoreDiagnoseOutputParams;
@property(readonly, nonatomic) _Bool ignoreDiagnoseInputParams; // @synthesize ignoreDiagnoseInputParams=_ignoreDiagnoseInputParams;
@property(readonly, nonatomic) _Bool ignoreDiagnose; // @synthesize ignoreDiagnose=_ignoreDiagnose;
@property(retain, nonatomic) NSString *parentTraceId; // @synthesize parentTraceId=_parentTraceId;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) __weak id <PSDPluginProtocol> currentListner; // @synthesize currentListner=_currentListner;
@property(copy, nonatomic) NSDictionary *psdEventData; // @synthesize psdEventData=_psdEventData;
@property(readonly, nonatomic) _Bool isStoped; // @synthesize isStoped=_isStoped;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) PSDContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <PSDEventTargetProtocol> currentTarget; // @synthesize currentTarget=_currentTarget;
@property(nonatomic) __weak id <PSDEventTargetProtocol> target; // @synthesize target=_target;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) unsigned long long eventPhase; // @synthesize eventPhase=_eventPhase;
@property(readonly, nonatomic) _Bool cancelable; // @synthesize cancelable=_cancelable;
@property(readonly, nonatomic) _Bool bubbles; // @synthesize bubbles=_bubbles;
- (void).cxx_destruct;
- (id)description;
- (void)preventDefault;
- (void)stopPropagation;
- (id)initWithEventType:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3;
@property(nonatomic) _Bool isDispatchFromExtension;
- (void)setNilValueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
