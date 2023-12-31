//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PXIndexPathSet;

__attribute__((visibility("hidden")))
@interface AEProgressViewModelSnapshot : NSObject
{
    long long _correspondingDataSourceIdentifier;	// 8 = 0x8
    NSDictionary *__progressByIndexPath;	// 16 = 0x10
    PXIndexPathSet *__pathsWithProgress;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000021b2c
@property(readonly, nonatomic) PXIndexPathSet *_pathsWithProgress; // @synthesize _pathsWithProgress=__pathsWithProgress;
@property(readonly, nonatomic) NSDictionary *_progressByIndexPath; // @synthesize _progressByIndexPath=__progressByIndexPath;
@property(readonly, nonatomic) long long correspondingDataSourceIdentifier; // @synthesize correspondingDataSourceIdentifier=_correspondingDataSourceIdentifier;
- (id)progressForIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000021a80
- (_Bool)hasProgressForIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000021a23
- (id)initWithProgressByIndexPath:(id)arg1 dataSourceIdenfitier:(long long)arg2;	// IMP=0x00000000000217fa

@end

