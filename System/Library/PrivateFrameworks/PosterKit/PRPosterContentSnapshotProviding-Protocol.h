//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class PRPosterConfiguration, UITraitCollection;

@protocol PRPosterContentSnapshotProviding <NSObject>
- (void)fetchSnapshotForConfiguration:(PRPosterConfiguration *)arg1 compatibleWithTraitCollection:(UITraitCollection *)arg2 completion:(void (^)(UIImage *, NSError *))arg3;
@end
