//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOLPRRoot, NSMutableArray, NSMutableDictionary, NSString, UITableView, VGVehicle;

@interface LPRRegionSelectionViewController
{
    long long _scenario;	// 8 = 0x8
    UITableView *_regionTableView;	// 16 = 0x10
    NSMutableArray *_regions;	// 24 = 0x18
    NSMutableDictionary *_powerTypes;	// 32 = 0x20
    VGVehicle *_currentVehicle;	// 40 = 0x28
    NSString *_regionCodes;	// 48 = 0x30
    GEOLPRRoot *_lprRules;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000004e3f10
@property(retain, nonatomic) GEOLPRRoot *lprRules; // @synthesize lprRules=_lprRules;
@property(retain, nonatomic) NSString *regionCodes; // @synthesize regionCodes=_regionCodes;
@property(retain, nonatomic) VGVehicle *currentVehicle; // @synthesize currentVehicle=_currentVehicle;
@property(retain, nonatomic) NSMutableDictionary *powerTypes; // @synthesize powerTypes=_powerTypes;
@property(retain, nonatomic) NSMutableArray *regions; // @synthesize regions=_regions;
@property(retain, nonatomic) UITableView *regionTableView; // @synthesize regionTableView=_regionTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000004e3a4b
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00100000004e340b
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00100000004e33a1
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000004e335d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000004e32e9
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000004e3124
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000004e307a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000004e2f8a
- (void)viewDidLoad;	// IMP=0x00100000004e1f3a
- (id)initWithVehicle:(id)arg1 scenario:(long long)arg2;	// IMP=0x00100000004e1ec0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
