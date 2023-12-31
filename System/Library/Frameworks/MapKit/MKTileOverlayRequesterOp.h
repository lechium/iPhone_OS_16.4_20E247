//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _MKOverlayTileRequester;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKTileOverlayRequesterOp : NSObject
{
    struct _GEOTileKey _key;	// 8 = 0x8
    _MKOverlayTileRequester *_delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    id _data;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001f4dc3
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) __weak _MKOverlayTileRequester *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct _GEOTileKey key; // @synthesize key=_key;
- (void)_cancel;	// IMP=0x00000000001f4b25
- (void)cancel;	// IMP=0x00000000001f4ac4
- (void)_start;	// IMP=0x00000000001f44e9
- (void)start;	// IMP=0x00000000001f4488
- (id)init;	// IMP=0x00000000001f43ba

@end

