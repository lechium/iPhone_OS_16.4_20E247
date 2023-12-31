//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDMediaNode
{
    PDAnimationTarget *mTarget;	// 168 = 0xa8
    _Bool mIsMuted;	// 176 = 0xb0
    _Bool mIsShowWhenStopped;	// 177 = 0xb1
    long long mNumberOfSlides;	// 184 = 0xb8
    long long mVolume;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000043d9c9
- (void)setVolume:(long long)arg1;	// IMP=0x000000000023973b
- (long long)volume;	// IMP=0x000000000043d9b8
- (void)setNumberOfSlides:(long long)arg1;	// IMP=0x000000000023972a
- (long long)numberOfSlides;	// IMP=0x000000000043d9a7
- (void)setIsShowWhenStopped:(_Bool)arg1;	// IMP=0x000000000023971a
- (_Bool)isShowWhenStopped;	// IMP=0x000000000043d997
- (void)setIsMuted:(_Bool)arg1;	// IMP=0x000000000023970a
- (_Bool)isMuted;	// IMP=0x000000000043d987
- (void)setTarget:(id)arg1;	// IMP=0x00000000002396f6
- (id)target;	// IMP=0x000000000043d972
- (id)init;	// IMP=0x00000000002393d5

@end

