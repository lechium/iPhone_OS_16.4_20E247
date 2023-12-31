//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface SBKZipDeflateMemoryOutputStream : NSObject
{
    NSMutableData *deflatedData;	// 8 = 0x8
    struct z_stream_s zstream;	// 16 = 0x10
    char *_outputBuffer;	// 128 = 0x80
    int _bufferingSize;	// 136 = 0x88
}

+ (id)dataByDeflatingData:(id)arg1;	// IMP=0x0060000000020827
- (void).cxx_destruct;	// IMP=0x0000000000020817
- (_Bool)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000020691
- (id)close;	// IMP=0x0000000000020599
- (void)dealloc;	// IMP=0x000000000002053d
- (id)initWithBufferingSize:(int)arg1 compressionType:(unsigned long long)arg2;	// IMP=0x0000000000020414

@end

