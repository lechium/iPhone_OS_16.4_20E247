//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPObjectPool;

__attribute__((visibility("hidden")))
@interface VCPColorNormalizationAnalyzer : NSObject
{
    VCPObjectPool *_sessionPool;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000108913
- (int)analyzeCGImage:(struct CGImage *)arg1 results:(id *)arg2;	// IMP=0x0000000000108062
- (id)init;	// IMP=0x0000000000107fbe

@end

