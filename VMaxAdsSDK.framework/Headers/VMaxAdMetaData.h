//
//  VMaxAdMetaData.h
//  VMaxAdSDK
//
//  Created by Cloy Monis on 06/08/21.
//  Copyright © 2021 Vserv.mobi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VMaxAdMetaData : NSObject

- (id)initWithAdSpotKeys:(NSArray*)adSpotKeys customData:(NSDictionary*)customData;

- (NSArray*)getAdSpotKeys;

- (NSDictionary*)getCustomData;

@end

NS_ASSUME_NONNULL_END
