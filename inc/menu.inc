
    <!-- Nav -->
    <nav class="navbar navbar-inverse navbar-fixed-top" role="navigation">
        <div class="container">
            <!-- nav display toggle -->
            <div class="navbar-header">
                <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
                    <span class="sr-only">Toggle navigation</span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>

                </button>
               

            </div>
            <!-- nav content -->
            <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
                <ul class="nav navbar-nav">
                    <li <?php echo ($page == 'home') ? 'class="current"' : '';?>>
                        <a href="index.php">Home</a>
                    </li>
                    <li <?php echo ($page == 'EDM') ? 'class="current"' : '';?>>
                        <a href="EDM.php">EDM</a>
                    </li>
                    <li <?php echo ($page == 'IDM') ? 'class="current"' : '';?>>
                        <a href="IDM.php">IDM</a>
                    </li>
                    <li <?php echo ($page == 'HipHop') ? 'class="current"' : '';?>>
                        <a href="HipHop.php">Hip Hop</a>
                    </li>
                    <li <?php echo ($page == 'colophon') ? 'class="current"' : '';?>>
                        <a href="colophon.php">Colophon</a>
                    </li>
                </ul>
            </div>
            <!-- /.navbar-collapse -->
        </div>
        <!-- /.container -->
    </nav>