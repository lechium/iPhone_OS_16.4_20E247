//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE, NSUndoManager, UIBarButtonItem, UITableViewCell, UITextField;

@interface _TtC9Reminders29TTRIGroupDetailViewController : UITableViewController
{
    MISSING_TYPE *nameTextField;	// 8 = 0x8
    MISSING_TYPE *doneBarButtonItem;	// 16 = 0x10
    MISSING_TYPE *includeCell;	// 24 = 0x18
    MISSING_TYPE *presenter;	// 32 = 0x20
    MISSING_TYPE *style;	// 48 = 0x30
    MISSING_TYPE *localUndoManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0040000000478fc0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000478f60
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000478f30
- (void)nameTextFieldDidChange:(id)arg1;	// IMP=0x0010000000478eb0
- (void)didTapCreate:(id)arg1;	// IMP=0x0010000000478dc0
- (void)didTapCancel:(id)arg1;	// IMP=0x0010000000478ca0
@property(nonatomic) __weak UITableViewCell *includeCell; // @synthesize includeCell;
@property(nonatomic) __weak UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem;
@property(nonatomic) __weak UITextField *nameTextField; // @synthesize nameTextField;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000478ad0
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0010000000478a80
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0010000000478a60
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000004789f0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000004789b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000478840
- (void)viewDidLoad;	// IMP=0x0010000000478630
@property(nonatomic, readonly) NSUndoManager *undoManager;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000004781a0

@end
