//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlowLimitControlManager : NSObject
{
}

+ (id)flowLimitErrorWithUserInfo:(id)arg1;
+ (id)flowLimitError;
+ (unsigned long long)DownLoadSelectChannel;
+ (_Bool)shouldLimitWithType:(unsigned long long)arg1;
+ (_Bool)limitDownLoadWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)limitVoiceDownLoadWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)limitVideoDownLoadWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)limitFileDownloadWithRequestCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)limitThumbnailImageDownLoadWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)limitBigImageDownLoadWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)cloudConfigDownLoadSelectChannel;

@end
