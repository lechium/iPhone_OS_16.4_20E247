//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _CRLPKStrokeData : NSObject
{
    unsigned long long _pointsCount;	// 8 = 0x8
    unsigned long long _pointsMaxCount;	// 16 = 0x10
    char *_points;	// 24 = 0x18
    _Bool _pointsOwned;	// 32 = 0x20
}

- (void)dealloc;	// IMP=0x00200000004d4fcc
- (id)initWithPoints:(struct CRLPKCompressedStrokePoint *)arg1 count:(unsigned long long)arg2 copy:(_Bool)arg3;	// IMP=0x00100000004d4f43
- (id)init;	// IMP=0x00100000004d4eef

@end

