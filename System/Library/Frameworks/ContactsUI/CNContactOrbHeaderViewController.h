//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNContactOrbHeaderView, NSArray;

__attribute__((visibility("hidden")))
@interface CNContactOrbHeaderViewController : UIViewController
{
    CNContactOrbHeaderView *_headerView;	// 8 = 0x8
    NSArray *_contacts;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000019fd2b
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) CNContactOrbHeaderView *headerView; // @synthesize headerView=_headerView;
- (double)suggestedHeaderWidth;	// IMP=0x000000000019fb44
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000019f968
- (void)viewDidLoad;	// IMP=0x000000000019f320
- (id)initWithContacts:(id)arg1;	// IMP=0x000000000019f249

@end
