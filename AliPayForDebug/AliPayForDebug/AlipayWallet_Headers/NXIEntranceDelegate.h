//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"

@class NSString;
@protocol DTMicroApplicationDelegate;

@interface NXIEntranceDelegate : NSObject <DTMicroApplicationDelegate>
{
    id <DTMicroApplicationDelegate> _nxiApp;
    id <DTMicroApplicationDelegate> _h5App;
}

+ (_Bool)hasCubeErrorOccurred:(id)arg1;
@property(retain, nonatomic) id <DTMicroApplicationDelegate> h5App; // @synthesize h5App=_h5App;
@property(retain, nonatomic) id <DTMicroApplicationDelegate> nxiApp; // @synthesize nxiApp=_nxiApp;
- (void).cxx_destruct;
- (_Bool)isValidString:(id)arg1;
- (_Bool)shouldUseNebulaX:(id)arg1;
- (_Bool)hasNebulaXCrashed;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)rootControllerInApplication:(id)arg1;
- (void)applicationDidCreate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

