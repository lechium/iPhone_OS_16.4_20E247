//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CRLReadChannel, OS_dispatch_data;

@interface CRLReadChannelInputStreamAdapter : NSObject
{
    id <CRLReadChannel> _readChannel;	// 8 = 0x8
    NSObject<OS_dispatch_data> *_leftoverData;	// 16 = 0x10
    long long _offset;	// 24 = 0x18
    unsigned long long _length;	// 32 = 0x20
    _Bool _closeChannelOnClose;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000146e16
- (id)closeLocalStream;	// IMP=0x0010000000146e0e
- (void)enableSystemCaching;	// IMP=0x0010000000146e08
- (void)disableSystemCaching;	// IMP=0x0010000000146e02
- (void)seekToOffset:(long long)arg1;	// IMP=0x0010000000146c05
- (_Bool)canSeek;	// IMP=0x0010000000146bf7
- (void)close;	// IMP=0x0010000000146bbf
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x001000000014629d
- (long long)offset;	// IMP=0x0010000000146293
- (void)dealloc;	// IMP=0x0010000000146255
- (id)initWithReadChannel:(id)arg1 length:(unsigned long long)arg2 closeChannelOnClose:(_Bool)arg3;	// IMP=0x00100000001461c4
- (id)initWithReadChannel:(id)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000001461ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

