//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSString, RAPPersonalPlaceCorrectionsWhichOneQuestion, RAPPersonalPlaceRefinementCoordinator, RAPReport;

@interface RAPPersonalPlaceSelectionViewController : UITableViewController
{
    RAPPersonalPlaceRefinementCoordinator *_currentCorrectionsCoordinator;	// 8 = 0x8
    RAPPersonalPlaceCorrectionsWhichOneQuestion *_question;	// 16 = 0x10
    RAPReport *_rapReport;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000005c0f62
@property(readonly, nonatomic) RAPReport *rapReport; // @synthesize rapReport=_rapReport;
@property(retain, nonatomic) RAPPersonalPlaceCorrectionsWhichOneQuestion *question; // @synthesize question=_question;
- (void)refinementCoordinator:(id)arg1 finishedRefiningCoordinate:(struct CLLocationCoordinate2D)arg2 withShortcut:(id)arg3;	// IMP=0x00100000005c0d02
- (void)refinementCoordinatorRequestsChangeAddress:(id)arg1 withShortcut:(id)arg2;	// IMP=0x00100000005c0c72
@property(readonly, nonatomic) int analyticTarget;
@property(readonly, nonatomic) int backAction;
- (void)_editCorrectionsQuestion:(id)arg1;	// IMP=0x00100000005c0bb7
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000005c0a72
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000005c091c
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00100000005c0866
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000005c0817
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000005c080c
- (id)homeWorkCorrectionQuestionForIndexPath:(id)arg1;	// IMP=0x00100000005c0755
- (void)cancel:(id)arg1;	// IMP=0x00100000005c073c
- (void)updateAddresses;	// IMP=0x00100000005c062c
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000005c0597
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000005c0522
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000005c049c
- (void)viewDidLoad;	// IMP=0x00100000005c0214
- (id)initWithQuestion:(id)arg1;	// IMP=0x00100000005c0136

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

