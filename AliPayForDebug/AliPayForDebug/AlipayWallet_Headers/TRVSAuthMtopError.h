//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface TRVSAuthMtopError : NSObject
{
    NSError *_oriError;
    NSString *_mtopErrorMsg;
    NSString *_mtopOriginalMsg;
    NSString *_mtopErrorCode;
}

@property(copy, nonatomic) NSString *mtopErrorCode; // @synthesize mtopErrorCode=_mtopErrorCode;
@property(copy, nonatomic) NSString *mtopOriginalMsg; // @synthesize mtopOriginalMsg=_mtopOriginalMsg;
@property(copy, nonatomic) NSString *mtopErrorMsg; // @synthesize mtopErrorMsg=_mtopErrorMsg;
@property(retain, nonatomic) NSError *oriError; // @synthesize oriError=_oriError;
- (void).cxx_destruct;

@end
