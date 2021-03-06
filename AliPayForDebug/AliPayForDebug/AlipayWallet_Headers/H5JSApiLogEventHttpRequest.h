//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDEvent.h"

@class NSData, NSDate, NSError, NSHTTPURLResponse, NSURLRequest;

@interface H5JSApiLogEventHttpRequest : PSDEvent
{
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSData *_responseData;
    NSError *_error;
    NSDate *_requestTime;
}

+ (id)eventWithRequest:(id)arg1 response:(id)arg2 responseData:(id)arg3 error:(id)arg4 requestTime:(id)arg5;
@property(retain, nonatomic) NSDate *requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end

