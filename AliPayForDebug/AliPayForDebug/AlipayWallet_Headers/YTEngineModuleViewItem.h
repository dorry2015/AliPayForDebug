//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol YTEngineModule;

@interface YTEngineModuleViewItem : NSObject
{
    UIView *_view;
    long long _position;
    id <YTEngineModule> _module;
}

@property(retain, nonatomic) id <YTEngineModule> module; // @synthesize module=_module;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;

@end
