//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCPluginManager-Protocol.h"

@class NSMutableSet, NSString;

@interface CCPluginManager : NSObject <CCPluginManager>
{
    NSMutableSet *_classes;
}

@property(retain, nonatomic) NSMutableSet *classes; // @synthesize classes=_classes;
- (void).cxx_destruct;
- (id)findPlugin:(id)arg1 param:(id)arg2;
- (void)findPlugin:(id)arg1 param:(id)arg2 enumerate:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
