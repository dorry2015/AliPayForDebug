//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Ant3DParBundle, NSString;

@interface Ant3DBundleLoader : NSObject
{
    Ant3DParBundle *_parBundle;
    NSString *_bundleDirectory;
}

- (void).cxx_destruct;
- (void)loadScene:(id)arg1 view:(id)arg2 config:(id)arg3;
- (id)contentsOfFile:(id)arg1;
- (id)fileWithExtension:(id)arg1;
- (struct FileDescriptor)fileDescriptorWithPath:(id)arg1;
- (_Bool)loadWithData:(id)arg1 forView:(id)arg2;
- (_Bool)loadWithFile:(id)arg1 forView:(id)arg2;

@end
