//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDJournalEntry.h"

@class NSArray, NSUUID;

__attribute__((visibility("hidden")))
@interface _HDLocationInsertionJournalEntry : HDJournalEntry
{
    NSUUID *_seriesIdentifier;	// 8 = 0x8
    NSArray *_data;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000445bc4
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;	// IMP=0x00600000004456e5
- (void).cxx_destruct;	// IMP=0x0000000000445e00
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000445d7d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000445bcc
- (id)description;	// IMP=0x000000000044563d

@end

