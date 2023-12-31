//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STIntroDowntimeTableViewController, STIntroductionViewModel;

__attribute__((visibility("hidden")))
@interface STIntroDowntimeViewController
{
    STIntroductionViewModel *_model;	// 8 = 0x8
    CDUnknownBlockType _continueHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006b2a7
@property(readonly, copy) CDUnknownBlockType continueHandler; // @synthesize continueHandler=_continueHandler;
@property(readonly) STIntroductionViewModel *model; // @synthesize model=_model;
- (void)_notNow:(id)arg1;	// IMP=0x000000000006b248
- (void)_setDowntime:(id)arg1;	// IMP=0x000000000006b17c
- (void)loadView;	// IMP=0x000000000006af31
@property(retain, nonatomic) STIntroDowntimeTableViewController *tableViewController;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006ac0d

@end

