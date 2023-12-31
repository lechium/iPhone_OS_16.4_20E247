//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class PUParallaxLayerStackView;

__attribute__((visibility("hidden")))
@interface PUParallaxLayerStackDebugTableViewController : UITableViewController
{
    PUParallaxLayerStackView *_layerStackView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004a6ab6
@property(retain, nonatomic) PUParallaxLayerStackView *layerStackView; // @synthesize layerStackView=_layerStackView;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000000004a6593
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x00000000004a658b
- (void)requestNewZPositionForCellAtIndexPath:(id)arg1;	// IMP=0x00000000004a62e3
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000004a61d4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000004a6030
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000004a6022
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000004a5c25
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000004a5b70
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000004a5b65
- (id)layerForIndexPath:(id)arg1;	// IMP=0x00000000004a5ad2
- (id)layersSortedByViewDepth;	// IMP=0x00000000004a59a0
- (id)labelForLayer:(id)arg1;	// IMP=0x00000000004a598b
- (void)viewDidLoad;	// IMP=0x00000000004a5850

@end

