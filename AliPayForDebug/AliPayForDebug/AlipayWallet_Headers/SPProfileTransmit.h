//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPProfileTransmit : NSObject
{
    NSString *_mySceneName;
    NSString *_sceneName;
    NSString *_sceneNameDesc;
    NSString *_userSceneName;
    NSString *_source;
    NSString *_userId;
}

@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *userSceneName; // @synthesize userSceneName=_userSceneName;
@property(retain, nonatomic) NSString *sceneNameDesc; // @synthesize sceneNameDesc=_sceneNameDesc;
@property(retain, nonatomic) NSString *sceneName; // @synthesize sceneName=_sceneName;
@property(retain, nonatomic) NSString *mySceneName; // @synthesize mySceneName=_mySceneName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displaySceneNickName;
- (id)decodeParam:(id)arg1;
- (id)initWithLaunchOptions:(id)arg1;
- (_Bool)isFromEverywhere;
- (_Bool)isFromCircle;

@end
