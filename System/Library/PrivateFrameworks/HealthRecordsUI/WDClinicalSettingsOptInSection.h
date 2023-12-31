//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HRWDTableViewSection.h"

__attribute__((visibility("hidden")))
@interface WDClinicalSettingsOptInSection : HRWDTableViewSection
{
    _Bool _optIn;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool optIn; // @synthesize optIn=_optIn;
- (void)_setOptInStatus:(long long)arg1;	// IMP=0x0000000000041bab
- (void)_fetchOptInStatus;	// IMP=0x000000000004195b
- (void)_handleOptInSwitchChanged:(id)arg1;	// IMP=0x0000000000041920
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000417ae
- (id)_optInCellForTableView:(id)arg1;	// IMP=0x0000000000041694
- (id)_viewDataCellForTableView:(id)arg1;	// IMP=0x00000000000415a3
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;	// IMP=0x000000000004156c
- (id)titleForHeader;	// IMP=0x000000000004155b
- (unsigned long long)numberOfRows;	// IMP=0x0000000000041550
- (void)applicationWillEnterForeground;	// IMP=0x000000000004150f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000414ce

@end

