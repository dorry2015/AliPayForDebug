//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CCDNGzipDecodeDelegate;

@interface CCDNGzipDecode : NSObject
{
    _Bool _hasStartUncompress;
    id <CCDNGzipDecodeDelegate> _delegate;
    struct z_stream_s _dstream;
}

@property(nonatomic) _Bool hasStartUncompress; // @synthesize hasStartUncompress=_hasStartUncompress;
@property(nonatomic) struct z_stream_s dstream; // @synthesize dstream=_dstream;
@property __weak id <CCDNGzipDecodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)defautltDocumentDirForCache;
- (void)endUncompress;
- (int)uncompress:(const char *)arg1 length:(unsigned int)arg2;
- (id)init;

@end

