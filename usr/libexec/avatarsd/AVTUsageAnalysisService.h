//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AVTUILogger;

@interface AVTUsageAnalysisService : NSObject
{
    id <AVTUILogger> _logger;	// 8 = 0x8
}

+ (id)_stringFromXPCActivityState:(long long)arg1;	// IMP=0x004000000000273b
- (void).cxx_destruct;	// IMP=0x0020000000002764
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
- (void)performUsageAnalysis;	// IMP=0x0010000000002700
- (void)startListening;	// IMP=0x00100000000024cb
- (id)initWithLogger:(id)arg1;	// IMP=0x0010000000002460

@end

