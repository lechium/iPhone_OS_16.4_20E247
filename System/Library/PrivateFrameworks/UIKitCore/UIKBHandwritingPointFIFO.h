//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBHandwritingPointFIFO : NSObject
{
    UIKBHandwritingPointFIFO *_nextFIFO;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a28277
@property(retain, nonatomic) UIKBHandwritingPointFIFO *nextFIFO; // @synthesize nextFIFO=_nextFIFO;
- (void)clear;	// IMP=0x0000000000a2821f
- (void)flush;	// IMP=0x0000000000a281e2
- (void)addPoint:(struct)arg1;	// IMP=0x0000000000a281d0
- (void)emitPoint:(struct)arg1;	// IMP=0x0000000000a2817a
- (id)initWithFIFO:(id)arg1;	// IMP=0x0000000000a28112

@end
