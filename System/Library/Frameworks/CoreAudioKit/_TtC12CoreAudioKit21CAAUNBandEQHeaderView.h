//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12CoreAudioKit21CAAUNBandEQHeaderView
{
    MISSING_TYPE *typeControl;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000a13c0
- (void)adjustViewIfHorizontallyCompressed:(struct CGSize)arg1;	// IMP=0x00000000000a1320
- (void)reset;	// IMP=0x000000000009fb50
- (void)clear;	// IMP=0x000000000009fae0
- (void)setVisibilityFor:(unsigned int)arg1 visible:(_Bool)arg2 color:(id)arg3;	// IMP=0x000000000009f850
- (void)updateEQControlWithOldParam:(unsigned int)arg1 newParam:(unsigned int)arg2 value:(float)arg3 color:(id)arg4;	// IMP=0x000000000009f350
- (void)addParameterWithId:(unsigned int)arg1 name:(id)arg2 shortName:(id)arg3 symbolName:(id)arg4 value:(float)arg5 min:(float)arg6 max:(float)arg7 logBase:(float)arg8 formatter:(id)arg9 unit:(id)arg10 additionalPad:(double)arg11;	// IMP=0x000000000009eb60
- (void)updateTypeControlFor:(unsigned int)arg1 selectedIndex:(long long)arg2 color:(id)arg3;	// IMP=0x000000000009e2f0
- (void)createTypeControlFor:(unsigned int)arg1 valueStrings:(id)arg2 abbreviatedValueStrings:(id)arg3 selectedIndex:(long long)arg4 target:(id)arg5 selector:(SEL)arg6 color:(id)arg7;	// IMP=0x000000000009e200
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009d670
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000009d640

@end

