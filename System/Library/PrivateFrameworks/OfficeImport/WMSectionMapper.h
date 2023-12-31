//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDSection;

__attribute__((visibility("hidden")))
@interface WMSectionMapper
{
    WDSection *wdSection;	// 40 = 0x28
    float mTopMargin;	// 48 = 0x30
    float mLeftMargin;	// 52 = 0x34
    _Bool mBreakAtStart;	// 56 = 0x38
    _Bool mBreakAtEnd;	// 57 = 0x39
    _Bool mIsTitlePage;	// 58 = 0x3a
}

+ (_Bool)isContentEmpty:(id)arg1;	// IMP=0x00600000000eb5ce
- (void).cxx_destruct;	// IMP=0x000000000045a495
- (float)leftMargin;	// IMP=0x000000000045a483
- (void)setLeftMargin:(float)arg1;	// IMP=0x000000000045a471
- (float)topMargin;	// IMP=0x000000000045a45f
- (void)setTopMargin:(float)arg1;	// IMP=0x000000000045a44d
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000000eab46
- (void)MapSectionStyleAt:(id)arg1;	// IMP=0x00000000000eadd3
- (id)initWithWDSection:(id)arg1 breakAtStart:(_Bool)arg2 breakAtEnd:(_Bool)arg3 parent:(id)arg4;	// IMP=0x00000000000ea957
- (void)mapFooterAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000000fabe7
- (void)mapHeaderAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000000eb01d

@end

