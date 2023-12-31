//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TransitSchedulesHeadsignPickerCollectionViewCellDelegate;

@interface TransitSchedulesHeadsignPickerProvider : NSObject
{
    id <TransitSchedulesHeadsignPickerCollectionViewCellDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000b28ccb
@property(nonatomic) __weak id <TransitSchedulesHeadsignPickerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)identifiersForDepartureSequences:(id)arg1;	// IMP=0x0010000000b28bf6
- (id)collectionView:(id)arg1 headsignCellWithIdentifier:(id)arg2 indexPath:(id)arg3 dataProvider:(id)arg4;	// IMP=0x0010000000b28ab7
- (void)collectionView:(id)arg1 selectedHeadsignForDepartureSequence:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000b289da
- (void)registerCellsForCollectionView:(id)arg1;	// IMP=0x0010000000b2895e

@end

