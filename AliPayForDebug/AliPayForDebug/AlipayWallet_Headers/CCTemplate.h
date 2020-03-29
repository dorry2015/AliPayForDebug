//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCMoudle-Protocol.h"

@class NSDictionary, NSString;
@protocol CCTemplate;

@interface CCTemplate : NSObject <CCMoudle>
{
    NSString *name;
    id <CCTemplate> _delegate;
    id _controller;
    NSDictionary *_info;
}

@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(nonatomic) __weak id controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <CCTemplate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)decorate:(id)arg1;
- (void)upgrade:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)findLocalTemplates:(id)arg1;
- (void)cctemplate:(id)arg1 rebuild:(id)arg2 didFinish:(id)arg3;
- (_Bool)cctemplate:(id)arg1 shouldRebuild:(id)arg2;
- (id)rebuild:(id)arg1;
- (void)rebuild:(id)arg1 sync:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)requestsFromTemplates:(id)arg1 libraryPath:(id)arg2 needDownload:(_Bool)arg3;
- (void)removeTemplatePlugins;
- (void)addTemplatePlugins;
- (void)dealloc;
- (id)init:(id)arg1 info:(id)arg2 controller:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
