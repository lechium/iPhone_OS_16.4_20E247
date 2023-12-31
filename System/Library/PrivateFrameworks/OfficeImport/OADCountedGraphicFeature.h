//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADCountedGraphicFeature : NSObject
{
    id mFeature;	// 8 = 0x8
    unsigned long long mUsageCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000345d17
@property(nonatomic) unsigned long long usageCount; // @synthesize usageCount=mUsageCount;
- (long long)compareUsageCount:(id)arg1;	// IMP=0x0000000000345ce5
- (void)incrementUsageCount;	// IMP=0x0000000000100b21
- (id)feature;	// IMP=0x0000000000345cd7
- (void)dealloc;	// IMP=0x00000000000b0322
- (id)initWithFeature:(id)arg1;	// IMP=0x00000000000ad603

@end

