//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIBlurEffectAverageImpl
{
    double _scale;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00600000000de75c
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000000de8d7
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000de8bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000de84d
- (unsigned long long)hash;	// IMP=0x00000000000de814
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000de7f3
- (id)initWithScale:(double)arg1;	// IMP=0x00000000000de799

@end
