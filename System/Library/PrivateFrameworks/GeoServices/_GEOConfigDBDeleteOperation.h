//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _GEOConfigDB;

__attribute__((visibility("hidden")))
@interface _GEOConfigDBDeleteOperation
{
    _GEOConfigDB *_configDB;	// 16 = 0x10
    long long _rowId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000029aa16
- (_Bool)performOperation;	// IMP=0x000000000029a9a7
- (id)init:(id)arg1 rowId:(long long)arg2;	// IMP=0x000000000029a927

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

