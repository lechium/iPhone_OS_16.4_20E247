//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TransitSchedulesDepartureCellProvider : NSObject
{
}

- (id)collectionView:(id)arg1 departureCellWithIdentifier:(id)arg2 indexPath:(id)arg3 referenceDate:(id)arg4 dataProvider:(id)arg5;	// IMP=0x0040000000339fc3
- (void)collectionView:(id)arg1 selectedDeparture:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000339deb
- (void)registerCellsForCollectionView:(id)arg1;	// IMP=0x0010000000339da2
- (id)_identifierForDeparture:(id)arg1;	// IMP=0x0010000000339cef
- (id)identifiersForDepartures:(id)arg1;	// IMP=0x0010000000339b03

@end
