//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class NSObject;
@protocol CNContactListCountViewDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListCountFooterView : UICollectionViewListCell
{
    long long _contactCount;	// 8 = 0x8
    long long _duplicateCount;	// 16 = 0x10
    long long _selectedCount;	// 24 = 0x18
    NSObject<CNContactListCountViewDelegate> *_delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000187d85
@property(nonatomic) __weak NSObject<CNContactListCountViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(nonatomic) long long duplicateCount; // @synthesize duplicateCount=_duplicateCount;
@property(nonatomic) long long contactCount; // @synthesize contactCount=_contactCount;
- (void)didSelectViewAllDuplicates;	// IMP=0x0000000000187ca8
- (_Bool)shouldDisplayDuplicateCount;	// IMP=0x0000000000187b57
- (_Bool)shouldDisplaySelectedCount;	// IMP=0x0000000000187b3e
- (_Bool)shouldDisplayContactCount;	// IMP=0x0000000000187b24
- (id)countStringForLocalizedStringKey:(id)arg1 count:(long long)arg2;	// IMP=0x0000000000187a3f
- (id)secondaryText;	// IMP=0x00000000001879e1
- (id)primaryText;	// IMP=0x000000000018794b
- (id)countViewConfiguration;	// IMP=0x0000000000187692
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001875be

@end
