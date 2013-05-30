//
//  CommentsMasterViewController.h
//  Comments
//
//  Created by iAron on 13-5-26.
//  Copyright (c) 2013年 iAron. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ASIHTTPRequest.h"
@interface CommentsMasterViewController : UITableViewController
@property (nonatomic,strong) ASIHTTPRequest *request;
@end
