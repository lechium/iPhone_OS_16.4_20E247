//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class GEORequestCounterInfo, NSArray;

@interface GeoRequestDetailTableViewController : UITableViewController
{
    GEORequestCounterInfo *_counterInfo;	// 8 = 0x8
    NSArray *_requestTypes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000642c97
@property(retain, nonatomic) NSArray *requestTypes; // @synthesize requestTypes=_requestTypes;
@property(retain, nonatomic) GEORequestCounterInfo *counterInfo; // @synthesize counterInfo=_counterInfo;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000006429d0
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0010000000642856
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000006427b4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000642797
- (CDStruct_026435ec)typeForSection:(long long)arg1;	// IMP=0x001000000064270f
- (_Bool)isValidSection:(long long)arg1;	// IMP=0x00100000006426d9
- (id)initWithGEORequestCounterInfo:(id)arg1;	// IMP=0x0010000000642639

@end

