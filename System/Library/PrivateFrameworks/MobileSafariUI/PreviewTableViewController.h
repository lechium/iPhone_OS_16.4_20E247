//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@protocol LinkPreviewProvider, PreviewTableViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PreviewTableViewController : UITableViewController
{
    id <PreviewTableViewControllerDelegate> _previewDelegate;	// 8 = 0x8
    id <LinkPreviewProvider> _linkPreviewProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c6ab9
@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) __weak id <PreviewTableViewControllerDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000000c6a28
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000c6836
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000000c678e
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000000c64bd
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000c6460

@end
