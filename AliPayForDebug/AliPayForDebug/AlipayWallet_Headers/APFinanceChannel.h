//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTRpcAsyncCaller;

@interface APFinanceChannel : NSObject
{
    DTRpcAsyncCaller *_channelList;
}

@property(retain, nonatomic) DTRpcAsyncCaller *channelList; // @synthesize channelList=_channelList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelReq;
- (void)financeChannelList:(CDUnknownBlockType)arg1 isShowTip:(_Bool)arg2;

@end

