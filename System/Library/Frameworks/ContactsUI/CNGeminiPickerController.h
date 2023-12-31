//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class CNGeminiChannel, NSIndexPath, NSMutableArray, NSString, UITableViewController;
@protocol CNPickerControllerDelegate><UINavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNGeminiPickerController : UINavigationController
{
    UITableViewController *_tableViewController;	// 8 = 0x8
    NSMutableArray *_geminiChannels;	// 16 = 0x10
    CNGeminiChannel *_preferredGeminiChannel;	// 24 = 0x18
    NSIndexPath *_selectedIndexPath;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000065b53
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) CNGeminiChannel *preferredGeminiChannel; // @synthesize preferredGeminiChannel=_preferredGeminiChannel;
@property(retain, nonatomic) NSMutableArray *geminiChannels; // @synthesize geminiChannels=_geminiChannels;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000656d7
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000000000656c2
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000654bc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000065238
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000065168
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000000650fb
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000065096
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000065047
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000064ffb
- (void)prepareCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000064c8d
- (id)geminiChannelForIndexPath:(id)arg1;	// IMP=0x0000000000064bf2
- (id)indexPathForGeminiChannel:(id)arg1;	// IMP=0x0000000000064b1a
- (void)cancelPicker:(id)arg1;	// IMP=0x0000000000064ace
- (void)donePicker:(id)arg1;	// IMP=0x0000000000064abc
- (void)didPickItem;	// IMP=0x00000000000649ba
- (void)setGeminiResult:(id)arg1 reload:(_Bool)arg2;	// IMP=0x00000000000647f2
- (void)setGeminiResult:(id)arg1;	// IMP=0x00000000000647db
- (id)initWithGeminiResult:(id)arg1;	// IMP=0x000000000006469d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CNPickerControllerDelegate><UINavigationControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

