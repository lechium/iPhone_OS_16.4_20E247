//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class AVMediaSelectionOption, AVPlayerController;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionTableViewController : UITableViewController
{
    AVMediaSelectionOption *_selectedAudioMediaSelectionOption;	// 8 = 0x8
    AVMediaSelectionOption *_selectedLegibleMediaSelectionOption;	// 16 = 0x10
    AVPlayerController *_playerController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008d1d5
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000008cd49
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000008ccc0
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000008cc44
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000008cbd9
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000008c964
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000008c8c3
- (_Bool)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)arg1;	// IMP=0x000000000008c7f7
- (_Bool)_isSelectedOrCurrentAudioMediaSelectionOption:(id)arg1;	// IMP=0x000000000008c72b
- (void)playerControllerMediaSelectionChanged:(id)arg1;	// IMP=0x000000000008c6b2
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000008c648
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000008c497
- (void)viewDidLoad;	// IMP=0x000000000008c060
- (void)dealloc;	// IMP=0x000000000008bf22
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000008be0d

@end

